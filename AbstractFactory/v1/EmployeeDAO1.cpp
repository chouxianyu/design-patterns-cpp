#include<vector>
#include<string>
using std::string;
using std::vector;

class EmployeeDO{

};

class SqlConnection{
public:
    string ConnectionString;
};

class SqlCommand{
public:
    string CommandText;
    SqlConnection* connection;
    
    void SetConnection(SqlConnection* p){
        this->connection = p;
    }
    
    SqlDataReader* ExecuteReader(){
        // ...
        return nullptr;
    }
};

class SqlDataReader{
public:
    bool Read(){
        // ...
        return true;
    }
};

class EmployeeDAO{
public:
    vector<EmployeeDO> GetEmployees(){
        SqlConnection* connection = new SqlConnection();
        connection->ConnectionString = "...";

        SqlCommand* command = new SqlCommand();
        command->CommandText="...";
        command->SetConnection(connection);

        SqlDataReader* reader = command->ExecuteReader();
        while (reader->Read()){
            // ...
        }
    }
};
