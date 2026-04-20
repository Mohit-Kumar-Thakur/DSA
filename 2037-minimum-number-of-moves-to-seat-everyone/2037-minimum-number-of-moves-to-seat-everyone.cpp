class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int step_count=0;
        for(int i =0;i<students.size();i++){
            step_count += abs(seats[i]-students[i]);
        }
        return step_count;
    }
};