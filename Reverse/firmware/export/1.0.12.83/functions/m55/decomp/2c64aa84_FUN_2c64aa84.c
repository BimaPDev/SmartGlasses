/* FUN_2c64aa84 @ 0x2c64aa84 */

void FUN_2c64aa84(undefined4 param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  switch(param_3) {
  case 0:
    FUN_2c648600(DAT_2c64ab24);
    break;
  case 1:
    FUN_2c648600(DAT_2c64ab28);
    break;
  case 2:
    FUN_2c648600(DAT_2c64ab2c);
    break;
  case 3:
    FUN_2c648600(DAT_2c64ab30);
    break;
  case 4:
    FUN_2c648600(DAT_2c64ab34);
    break;
  case 5:
    FUN_2c648600(DAT_2c64ab38);
    break;
  case 6:
    FUN_2c648600(DAT_2c64ab14);
  }
  FUN_2c648600(DAT_2c64ab18,param_1);
  FUN_2c648600(DAT_2c64ab1c,param_2);
  iVar2 = FUN_2c672ae8(param_2 << 10,(param_2 << 10) >> 0x1f,param_1,0);
  lVar1 = (longlong)(param_2 << 10) * 100;
  iVar3 = FUN_2c672ae8((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),param_1,0);
  FUN_2c648600(DAT_2c64ab20,iVar2,iVar3 + iVar2 * -100);
  return;
}

