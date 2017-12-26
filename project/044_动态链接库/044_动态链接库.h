// 下列 ifdef 块是创建使从 DLL 导出更简单的
// 宏的标准方法。此 DLL 中的所有文件都是用命令行上定义的 MY044__EXPORTS
// 符号编译的。在使用此 DLL 的
// 任何其他项目上不应定义此符号。这样，源文件中包含此文件的任何其他项目都会将
// MY044__API 函数视为是从 DLL 导入的，而此 DLL 则将用此宏定义的
// 符号视为是被导出的。
#ifdef MY044__EXPORTS
#define MY044__API __declspec(dllexport)
#else
#define MY044__API __declspec(dllimport)
#endif

// 此类是从 044_动态链接库.dll 导出的
class MY044__API CMy044_动态链接库 {
public:
	CMy044_动态链接库(void);
	// TODO:  在此添加您的方法。
};

extern MY044__API int nMy044_动态链接库;

MY044__API int fnMy044_动态链接库(void);

extern "C" MY044__API int ndllwin32;
extern "C" MY044__API int aaa;
MY044__API int fndllwin32(void);
extern "C" __declspec(dllexport) int add(int a, int b);

