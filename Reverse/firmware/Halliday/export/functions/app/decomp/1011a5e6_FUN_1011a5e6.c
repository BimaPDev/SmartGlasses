/* FUN_1011a5e6 @ 0x1011a5e6 */

int FUN_1011a5e6(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int local_3c;
  uint local_38;
  int local_34;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar1 = DAT_10054df8;
  FUN_1011ea48(&local_3c,0,0x24);
  local_3c = (*(code *)*puVar1)(0x100);
  local_28 = 0;
  local_38 = 0x100;
  uStack_24 = *puVar1;
  uStack_20 = puVar1[1];
  uStack_1c = puVar1[2];
  if ((local_3c != 0) && (iVar2 = FUN_10054a1c(param_1,&local_3c), iVar2 != 0)) {
    FUN_1011a4de(&local_3c);
    if ((code *)puVar1[2] == (code *)0x0) {
      iVar2 = (*(code *)*puVar1)(local_34 + 1);
      if (iVar2 != 0) {
        uVar3 = local_34 + 1U;
        if (local_38 <= local_34 + 1U) {
          uVar3 = local_38;
        }
        FUN_1011ea40(iVar2,local_3c,uVar3);
        *(undefined1 *)(iVar2 + local_34) = 0;
        (*(code *)puVar1[1])(local_3c);
        return iVar2;
      }
    }
    else {
      iVar2 = (*(code *)puVar1[2])(local_3c,local_34 + 1);
      if (iVar2 != 0) {
        return iVar2;
      }
    }
  }
  if (local_3c != 0) {
    (*(code *)puVar1[1])(local_3c);
  }
  return 0;
}

