/*
	Solution for the problem 238 of aceptaelreto.com

	- Repartiendo el botin - 

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
#include <vector>


using namespace std;

int main(){
    int n, m, aux;

    while(true) {
        scanf("%d %d", &n, &m); if(n==0 and m==0) return 0;
        vector<vector<int>> matrix(m,  vector<int>());
        vector<int> sum(m, 0);

        /* create the matrix */
        for(int i=0; i<n; i++){
            scanf("%d", &aux);
            matrix[i%m].push_back(aux); /* i%m to insert in the right row */
            sum[i%m] += aux;
        }
        /* print the matrix */
        for(int i=0; i<m; i++){
            printf("%d:", sum[i]); if(sum[i] == 0) printf("\n");
            for(int j=0; j<matrix[i].size(); j++) {
                if (j != matrix[i].size() - 1) {
                    printf(" %d", matrix[i][j]);
                } else {
                    printf(" %d\n", matrix[i][j]);
                }
            }
        }
        printf("---\n");

    }

}