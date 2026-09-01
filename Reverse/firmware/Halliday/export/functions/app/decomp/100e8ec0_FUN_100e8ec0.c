/* FUN_100e8ec0 @ 0x100e8ec0 */

void FUN_100e8ec0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  uVar1 = DAT_100e8f50;
  uVar2 = DAT_100e8f4c;
  if (param_1 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)*DAT_100e8f34;
    for (iVar4 = 0; uVar1 = DAT_100e8f48, uVar2 = DAT_100e8f44, iVar4 != *DAT_100e8f30;
        iVar4 = iVar4 + 1) {
      puVar3 = (undefined4 *)*puVar5;
      if (param_1 == puVar3) {
        if (((puVar3[0xf] == 0) || (iVar4 = puVar3[0xf] + -1, puVar3[0xf] = iVar4, iVar4 == 0)) &&
           (param_2 != 0)) {
          *puVar5 = 0;
          if (puVar3 != (undefined4 *)0x0) {
            if (puVar3[0xd] != 0) {
              FUN_100a5b78(DAT_100eb640 | (DAT_100eb634 - DAT_100eb630) * 0x20 & 0xff00U,
                           DAT_100eb63c,DAT_100eb644);
              FUN_1006bc30(puVar3);
              *puVar3 = 0;
              puVar3[1] = 0;
              puVar3[2] = 0;
            }
            if (puVar3[0x10] != 0) {
              FUN_1006bc30(puVar3 + 3);
              puVar3[3] = 0;
              puVar3[4] = 0;
              puVar3[5] = 0;
            }
            if (puVar3[0xe] != 0) {
              FUN_1006bc30(puVar3 + 6);
              puVar3[6] = 0;
              puVar3[7] = 0;
              puVar3[8] = 0;
            }
            if (puVar3[0xc] != 0) {
              FUN_10138fd0(2);
              puVar3[0xc] = 0;
              puVar3[10] = 0;
            }
            if (puVar3[0xd] != 0) {
              FUN_1012d1f4();
              puVar3[0xd] = 0;
            }
            if (puVar3[0xe] != 0) {
              FUN_1012d1f4();
              puVar3[0xe] = 0;
            }
            if (puVar3[0x10] != 0) {
              if (*(int *)(puVar3[0x10] + 0x14) != 0) {
                FUN_10138fd0(0);
              }
              if (*(int *)(puVar3[0x10] + 0x18) != 0) {
                FUN_10138fd0(0);
              }
              if (*(int *)(puVar3[0x10] + 0x30) != 0) {
                FUN_10138fd0(0);
              }
              if (*(int *)(puVar3[0x10] + 0x34) != 0) {
                FUN_10138fd0(0);
              }
              FUN_10138fd0(0,puVar3[0x10]);
              puVar3[0x10] = 0;
            }
            FUN_1012d1f4(puVar3);
            return;
          }
          FUN_100a5b78((DAT_100eb634 - DAT_100eb630) * 0x20 & 0xff00U | 0x7100031,DAT_100eb63c,
                       DAT_100eb638,0);
          return;
        }
        return;
      }
      puVar5 = puVar5 + 1;
    }
  }
  FUN_100a5b78(uVar1 | (DAT_100e8f3c - DAT_100e8f38) * 0x20 & 0xff00U,DAT_100e8f40,uVar2);
  return;
}

