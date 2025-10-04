#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> int_scores;
    for (int i = 0; i < student_scores.size(); i++) {
        int_scores.push_back(static_cast<int>(student_scores.at(i)));
    }
    
    return int_scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int counter = 0;
    for (int i = 0; i < student_scores.size(); i++) {
        
        if (student_scores[i] <= 40) {
            counter++;
        }
    }  
    return counter;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    int fail_grade = 40;
    int grade_interval = static_cast<int>((highest_score - fail_grade) / 4);
    std::array<int, 4> lower_scores;
    lower_scores[0] = 41;
    for (int i = 1; i < lower_scores.size(); i++) {
        lower_scores[i] = lower_scores[i - 1] + grade_interval;
    }
    return lower_scores;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {

    std::vector<std::string> ranked_students;
    std::string format = " ";
    int rank = 1;
    for (int i = 0; i < student_scores.size(); i++) {
        format = std::to_string(rank) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]); 
        ranked_students.push_back(format);
        rank++;
    }
    
    
    // TODO: Implement student_ranking
    return ranked_students;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    for (int i = 0; i < student_scores.size(); i++){
        if (student_scores.at(i) == 100) {
            return student_names.at(i);
        }
    }
    return "";

}
