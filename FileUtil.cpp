#include <iostream>
#include <fstream>

using namespace std;

class FileUtil
{
    public:
        FileUtil();
        ~FileUtil();
    public:
        void readLocalFile(const std::string& srcFileName,std::string& content);
        void writeLocalFile(const std::string& srcFileName,const std::string& content);        
};

FileUtil::FileUtil(){}
FileUtil::~FileUtil(){}

void FileUtil::readLocalFile(const std::string& srcFileName,std::string& content)
{
    const int LINE_LENGTH = 100; 
    char buffer[LINE_LENGTH];
    // 以读模式打开文件
    ifstream infile;
    infile.open(srcFileName);
    cout << "Reading from the file:"<< srcFileName << endl; 
    if(!infile.is_open()){
        cout << "Error opening file";
        return;
    }
    while(infile.getline(buffer, LINE_LENGTH))
    {
        //if (infile.getline(buffer, 100).good())
        //{
            content.append(buffer).append("\n");
            //content.append(buffer);
        //}
    }

   // 在屏幕上写入数据
   //cout << content << endl; 

   infile.close();
}

void FileUtil::writeLocalFile(const std::string& srcFileName,const std::string& content)
{
    ofstream outfile(srcFileName.c_str());  
    if(!outfile)
    {
        return;
    }
    outfile << "this is line one\n";
    outfile << "中文行\n";
    outfile << content;
    outfile.close();
}

int main(){
    FileUtil fileUtil;
    string content="";
    string fileName="/Users/liuyunjian/work/tt";
    fileUtil.readLocalFile(fileName,content);

    cout << "length:"<<content.size()<<" content:"<<content;

    string outfile="/Users/liuyunjian/work/tt-out";
    fileUtil.writeLocalFile(outfile,content);
}
