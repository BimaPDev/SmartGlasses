/* FUN_2c64ed70 @ 0x2c64ed70 */

char FUN_2c64ed70(int *param_1,int *param_2,uint param_3,undefined4 param_4,char param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_2c64ec84(param_1,param_4,param_3,param_4,param_4);
  while( true ) {
    iVar4 = *param_1;
    iVar3 = param_1[1];
    if ((iVar4 == iVar3) || (param_2[1] == *param_2)) {
      return '\0';
    }
    uVar1 = FUN_2c64e740(param_1,param_3);
    if (uVar1 == 0xfffffffe) {
      return param_5 + '\x01';
    }
    if (param_3 < uVar1) break;
    iVar2 = func_0x2c64ea34(param_2,uVar1,param_4);
    if (iVar2 == 0) {
      *param_1 = iVar4;
      param_1[1] = iVar3;
      return '\x01';
    }
  }
  return '\x02';
}

