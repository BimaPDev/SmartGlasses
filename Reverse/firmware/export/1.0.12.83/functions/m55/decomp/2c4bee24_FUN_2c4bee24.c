/* FUN_2c4bee24 @ 0x2c4bee24 */

void FUN_2c4bee24(uint param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (0x1f < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4beeb4);
  }
  if ((int)(param_1 << 0x1c) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4beeb8);
  }
  iVar5 = *(int *)(DAT_2c4beeac + (param_1 >> 4) * 4) + (param_1 & 0xf) * 0x20;
  *(uint *)(iVar5 + 0x110) = *(uint *)(iVar5 + 0x110) | 0x40000;
  puVar2 = DAT_2c4beeb0;
  if (*(int *)(iVar5 + 0x110) << 0xe < 0) {
    uVar4 = 2;
    do {
      if (uVar4 - 1 < 4) {
        FUN_2c673b08(10);
        if (-1 < *(int *)(iVar5 + 0x110) << 0xe) break;
      }
      else {
        if ((code *)*puVar2 == (code *)0x0) {
LAB_2c4bee98:
          FUN_2c673e08(0x10);
        }
        else {
          uVar3 = 0;
          bVar1 = (bool)isCurrentModePrivileged();
          if (bVar1) {
            uVar3 = getCurrentExceptionNumber();
            uVar3 = uVar3 & 0x1ff;
          }
          if (uVar3 != 0) goto LAB_2c4bee98;
          (*(code *)*puVar2)(1);
        }
        if ((-1 < *(int *)(iVar5 + 0x110) << 0xe) || (uVar4 == 10)) break;
      }
      uVar4 = uVar4 + 1 & 0xff;
    } while( true );
  }
  FUN_2c4bedd8(param_1);
  return;
}

