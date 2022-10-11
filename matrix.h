class Matrix {
    private:
        int rows;
        int columns;
        double **values;

    public:
        Matrix() {
            rows = 0;
            columns = 0;
            values = 0;
        }

        Matrix(int r, int c) {
            rows = r;
            columns = c;
            values = (double**) malloc(r * sizeof(double*));

            for(int i = 0; i < r; i++) {
                values[i] = (double*) malloc(c * sizeof(double*));
            }
        }

        int getRows() {
            return rows;
        }

        int getColumns() {
            return columns;
        }

        void fill(int n) {
            for (int row = 0; row < rows; row++) {
                for (int column = 0; column < columns; column++) {
                    values[row][column] = n;
                }
            }
        }

        void insert(double inValues[]) {
            /*
            int sizeInValues = 0;
            if(sizeInValues != rows*columns) {
                std::cerr << "Not the correct amount of value!" << std::endl;
            }*/

            int inValuesPos = 0;

            for(int row = 0; row < rows; row++) {
                for(int column = 0; column < columns; column++) {
                    values[row][column] = inValues[inValuesPos];
                    inValuesPos++;
                }
            }
        }

        void print() {
            for (int row = 0; row < rows; row++) {
                for (int column = 0; column < columns; column++) {
                    std::cout << values[row][column] << " ";
                }
                std::cout << std::endl;
            }
            std::cout << std::endl;
        }

        void identity() {
            this->fill(0);
            for(int row = 0; row < rows; row++) {
                for(int column = 0; column < columns; column++) {
                    values[row][row] = 1;
                }
            }
        }

        void transverse() {
        }

        void inverse() {
        }

        Matrix multiply(Matrix matrix) {
            Matrix multiplied(this->rows, matrix.columns);

            if(this->columns != matrix.rows) {
                std::cerr << "Matrix needs to have " << this->columns << " rows!" << std::endl;
            }

            return multiplied;
        }

        /**
        void free() {
            for (int i = 0; i < rows; i++) {
                free(values[i]);
            }
            free(*this);
        }
        **/
};
