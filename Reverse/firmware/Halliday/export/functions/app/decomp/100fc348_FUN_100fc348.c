/* FUN_100fc348 @ 0x100fc348 */

undefined4 FUN_100fc348(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  if (*(int *)(param_2 + 0x48) != *(int *)(param_1 + 0x10)) {
    return 6;
  }
  if (param_3 != 0) {
    FUN_100fa570(param_2 + 0x6c,param_3,param_3,param_4,param_4);
  }
  if (param_4 != (undefined4 *)0x0) {
    FUN_100fa540(param_2 + 0x6c,*param_4,param_4[1]);
    return 0;
  }
  return 0;
}

