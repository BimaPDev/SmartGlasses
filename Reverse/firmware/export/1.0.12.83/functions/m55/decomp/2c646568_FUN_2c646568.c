/* FUN_2c646568 @ 0x2c646568 */

undefined4 FUN_2c646568(char *param_1,int param_2)

{
  char cVar1;
  
  if (((param_1 == (char *)0x0) || (*param_1 != -0xf)) || (0x37 < param_2 - 1U)) {
    FUN_2c643a14(param_1,0xfffffffc);
    return 0xfffffffc;
  }
  if (param_1[1] == '\x04') {
    FUN_2c643a14(param_1,0xfffffffd);
    return 0xfffffffd;
  }
  cVar1 = (char)param_2;
  if (param_1[0x20] == cVar1) {
    return 0;
  }
  param_1[0x20] = cVar1;
  param_1[0x21] = cVar1;
  func_0x2c643a6c();
  func_0x2c645b68(param_1);
  FUN_2c64610c(0);
  return 0;
}

