namespace hellmath {

// TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.

enum class AccountStatus {
    troll,
    guest,
    user,
    mod
};

enum class Action {
    read,
    write,
    remove
};

bool display_post(AccountStatus poster, AccountStatus viewer) {
    if (poster == AccountStatus::troll) {
        return (viewer == AccountStatus::troll);
    }
    
    return true;
}

bool permission_check(Action action, AccountStatus status) {
    switch(status) {
        case AccountStatus::troll:
            switch(action) {
                case Action::read: return true;
                case Action::write: return true;
                default: return false;
            }
        case AccountStatus::guest:
            switch(action) {
                case Action::read: return true;
                default: return false;
            }
        case AccountStatus::user:
            switch(action) {
                case Action::read: return true;
                case Action::write: return true;
                default: return false;
            }
        case AccountStatus::mod:
            switch(action) {
                default: return true;
            }
        default: return false;
    }
}
        
bool valid_player_combination(AccountStatus option1, AccountStatus option2) {

    if (option1 == AccountStatus::guest || option2 == AccountStatus::guest) {
        return false;
    }

    if (option1 == AccountStatus::troll || option2 == AccountStatus::troll) {
        return (option1 == AccountStatus::troll && option2 == AccountStatus::troll);
    }

    return true;
    
}

bool has_priority(AccountStatus option1, AccountStatus option2) {

    if (option1 == option2) {
        return false;
    }

    switch(option1) {
        case AccountStatus::mod:
            return true;
        case AccountStatus::user:
            return (option2 == AccountStatus::guest || option2 == AccountStatus::troll);
        case AccountStatus::guest:
            return (option2 == AccountStatus::troll);
        case AccountStatus::troll:
            return false;
        default:
            return false;
    }

}


// TODO: Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.

// TODO: Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.

// TODO: Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.

// TODO: Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.

// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.

}  // namespace hellmath
