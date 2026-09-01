/* FUN_100b0df0 @ 0x100b0df0 */

bool FUN_100b0df0(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_3 + 4);
  cVar1 = FUN_1012df20(*(undefined1 *)(param_2 + 3));
  if (cVar1 == '\x01') {
    uVar2 = FUN_101301d8(*(undefined4 *)(iVar3 + 0xa0));
    *param_1 = uVar2;
    FUN_100a5b78((DAT_100b0e34 - DAT_100b0e38) * 0x20 & 0xff00U | 0x1920032,DAT_100b0e3c);
  }
  return cVar1 == '\x01';
}

