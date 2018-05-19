/*
    Solution for the problem 145 of aceptaelreto.com

    - El tren del amor - 

    Copyright (C) 2018 hnko
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<char> s;
    string train;

    while(cin >> train){
        int couples = 0;

        for(int i=0; i<train.size(); i++) {
            /* clear the vector because the first part is stuck */
            if(train[i] == '@'){
                s.clear();
            }
            /* put in the vector */
            else if (train[i] == 'H' or train[i] == 'h') {
                s.push_back(train[i]);
            }
            /* check of the female has an avaiable partner */
            else if (train[i] == 'M' or train[i] == 'm') {
                if (!s.empty()) {
                    if ((train[i] == 'M' and s.back() == 'H') or (train[i] == 'm' and s.back() == 'h')) {
                        couples++;
                        s.pop_back();
                    }else{
                        s.clear();
                    }
                }
            }
        }
        printf("%d\n", couples);
        s.clear();
    }

    return 0;
}