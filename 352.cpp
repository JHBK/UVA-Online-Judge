#include <bits/stdc++.h>

using namespace std ;

int Rows[ 8 ] = { -1 , -1 , -1 , 0 , 0 , 1 , 1 , 1 } ;
int Cols[ 8 ] = { -1 , 0 , 1 , -1 , 1 , -1 , 0 , 1 } ;

vector<string> v ;
int visited[30][30];

bool valid( int i , int j , int N ) {
    if( i < 0 ) return false ;
    if( j < 0 ) return false ;
    if( i >= N ) return false;
    if( j >= N ) return false ;

    return true ;

}
void dfs_visit( int i , int j , int N ) {

    visited[ i ][ j ] = true ;

    for( int c = 0 ; c < 8 ; c ++ ) {
        int n_r = i + Rows[ c ] ;
        int n_c = j + Cols[ c ] ;

        if( valid ( n_r , n_c , N ) && visited[ n_r ][ n_c ] == false && v[ n_r ][ n_c ] == '1' ) {
            dfs_visit( n_r , n_c , N ) ;
        }
    }
}
int solve() {
    int N = v.size() ;
    memset( visited , 0 , sizeof( visited ) ) ;

    int cnt = 0 ;

    for( int i = 0 ; i < N ; i ++ ) {
        for( int j = 0 ; j < N ; j ++ ) {
            if( visited[ i ][ j ] == false && v[ i ][ j ] == '1' ) {
                dfs_visit( i , j , N ) ;
                cnt ++ ;
            }
        }
    }
    return cnt ;
}

int main() {

    int N , C=0;

    while( cin >> N ) {
        v.clear();
        string line = "" ;

        C++;

        for( int j = 0 ; j < N ; j ++ ) {
            cin >> line ;
            v.push_back( line ) ;
        }

        int res = solve() ;
        cout << "Image number " << C << " contains " << res << " war eagles." << endl ;
    }
    return 0 ;
}
