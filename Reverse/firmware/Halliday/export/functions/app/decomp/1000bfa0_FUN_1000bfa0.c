/* FUN_1000bfa0 @ 0x1000bfa0 */

void FUN_1000bfa0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *DAT_1000bfcc;
  iVar1 = FUN_1000b9ac();
  if (iVar1 != param_3) {
    iVar1 = -4;
  }
  if (*DAT_1000bfcc != iVar2) {
    FUN_1013cdc0(iVar1);
  }
  return;
}

