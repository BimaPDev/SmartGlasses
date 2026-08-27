/* FUN_2c645886 @ 0x2c645886 */

int FUN_2c645886(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (((param_1 == (char *)0x0) || (*param_1 != -0xf)) || (param_1[1] == '\x04')) {
    iVar1 = -1;
    func_0x2c643a70(param_4);
  }
  else {
    iVar1 = (int)param_1[0x20];
    func_0x2c643a70(param_1,iVar1);
  }
  return iVar1;
}

