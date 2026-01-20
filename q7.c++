#include <iostream> 
using namespace std;

int main () {
    int score_a , score_b, score_c ;

    cout << " Enter Score of Player 1 : " ;
    cin >> score_a ;
    cout << " Enter Score of Player 2 : " ;
    cin >> score_b ;
    cout << " Enter Score of Player 3 : " ;
    cin >> score_c ;

    if (score_a > score_b &&  score_a > score_c) {
        cout << " Player 1 is the Highest Scorer with score : " << score_a << endl ;
    }
    else if ( score_b > score_a && score_b > score_c) {
        cout << " Player 2 is the Highest Scorer with score : " << score_b << endl ;
    }
    else if ( score_c > score_a && score_c > score_b) {
        cout << " Player 3 is the Highest Scorer with score : " << score_c << endl ;
    }
    else {
        cout << " There is a Tie among the Players. " << endl ; 

        return 0 ;
    }
}
