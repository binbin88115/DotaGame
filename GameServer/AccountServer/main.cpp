#include "Application.h"

int main()
{
	//========================================================================
	// 游戏客户端连接到该Server，验证用户名及密码，验证成功则下发分服列表
	// 每个分服列表包含：名称、分服状态、IP地址、端口
	// AccountServer操作账号数据库，该库只有一张Account表
	//========================================================================

    Application app(6220);
    app.Run();

	return 0;
}