/* FUN_2c5db634 @ 0x2c5db634 */

void FUN_2c5db634(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_1c;
  
  local_1c = *DAT_2c5db754;
  local_28 = 0;
  uStack_24 = 0;
  iVar1 = FUN_2c5e31b4(0x47,&local_28);
  uVar3 = DAT_2c5db76c;
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5db760,0x78,DAT_2c5db75c,DAT_2c5db768);
  }
  puVar4 = *(undefined4 **)(param_1 + 0x34);
  puVar5 = *(undefined4 **)(param_1 + 0x38);
  if (puVar4 != puVar5) {
    iVar1 = 0;
    do {
      while (iVar2 = FUN_2c66b624(*puVar4,uVar3), iVar2 != 0) {
        puVar4 = puVar4 + 6;
        iVar1 = iVar1 + 1;
        if (puVar5 == puVar4) goto LAB_2c5db686;
      }
      puVar4 = puVar4 + 6;
      iVar1 = iVar1 + 2;
    } while (puVar5 != puVar4);
LAB_2c5db686:
    if (4 - iVar1 < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c5db760,0x7d,DAT_2c5db75c,DAT_2c5db764);
    }
  }
  uVar3 = FUN_2c5da9e8(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5db760,0x80,DAT_2c5db75c,DAT_2c5db758,uVar3);
}

