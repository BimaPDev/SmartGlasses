/* FUN_1406ae10 @ 0x1406ae10 */

int FUN_1406ae10(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  
  switch(param_2) {
  case 10:
  case 0xc:
    *param_3 = DAT_1406ae90;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_1406ae84,0x20d,DAT_1406ae80);
  case 0xe:
  case 0x20:
    *param_3 = DAT_1406ae8c;
  }
  iVar1 = FUN_1406cd54(param_1,0x25,0x30,DAT_1406ae88,param_4);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = *param_4;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined2 *)(iVar1 + 0x28) = 0;
  FUN_140739b4(iVar1 + 0x1c);
  return 0;
}

