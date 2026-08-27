/* FUN_2c00922c @ 0x2c00922c */

undefined4
FUN_2c00922c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_2c009288 + param_1;
  iVar1 = FUN_2c012f40(iVar3);
  if (iVar1 == 0) {
    FUN_2c00907c(param_1,param_2,1);
    uVar2 = FUN_2c009128(param_1,*(undefined4 *)(param_2 + 4),*(undefined1 *)(param_2 + 0xb),param_3
                         ,param_4,param_5);
    FUN_2c00907c(param_1,param_2,0);
    FUN_2c012f68(iVar3);
  }
  else {
    uVar2 = 0xffffffe1;
  }
  return uVar2;
}

