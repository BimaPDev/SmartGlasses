/* FUN_1408b254 @ 0x1408b254 */

int FUN_1408b254(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint extraout_r2;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_1408a624(param_2);
  uVar1 = DAT_1408b2f8;
  uVar4 = (uint)((ulonglong)uVar7 >> 0x20);
  iVar2 = (int)uVar7;
  piVar6 = (int *)(param_1 + 0x14);
  do {
    piVar6 = piVar6 + 1;
    iVar5 = *piVar6;
    if (iVar5 != 0) {
      if ((extraout_r2 == 0) || (iVar2 == 0)) {
        if (*(ushort *)(iVar5 + 0x12) == uVar4) {
          return iVar5;
        }
      }
      else {
        iVar3 = FUN_1408a624(*(undefined2 *)(iVar5 + 0x12));
        if (iVar3 == iVar2) {
          if (extraout_r2 == 2) {
            if (*(short *)(iVar5 + 0x14) == 0) {
              return iVar5;
            }
          }
          else {
            if (2 < extraout_r2) {
              if (3 < (extraout_r2 - 3 & 0xff)) {
                return iVar5;
              }
              if ((*(short *)(iVar5 + 0x14) != 0) && (*(char *)(iVar5 + 0xad) == '\0')) {
                return iVar5;
              }
                    /* WARNING: Subroutine does not return */
              FUN_1402a64c(0x45,DAT_1408b2f4,uVar1,iVar2,uVar4,*(short *)(iVar5 + 0x14),
                           *(char *)(iVar5 + 0xad));
            }
            if (extraout_r2 != 1) {
              return iVar5;
            }
            if (*(char *)(iVar5 + 0xad) != '\0') {
              return iVar5;
            }
          }
        }
      }
    }
    if (piVar6 == (int *)(param_1 + 0x44)) {
      return 0;
    }
  } while( true );
}

