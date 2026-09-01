/* FUN_1009e86c @ 0x1009e86c */

int FUN_1009e86c(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  puVar4 = DAT_1009e9c4;
  puVar9 = DAT_1009e9c0;
  while( true ) {
    if (puVar4 <= puVar9) {
      FUN_100a5b78((DAT_1009e9cc - DAT_1009e9c8) * 0x20 & 0xff00U | 0xf70011,DAT_1009e9d4,
                   DAT_1009e9d0);
      return 0;
    }
    iVar2 = FUN_1011ea18(*puVar9,param_1);
    if (iVar2 == 0) break;
    puVar9 = puVar9 + 7;
  }
  FUN_1011dbf4(DAT_1009e9e4,0xffffffff);
  puVar4 = (undefined4 *)thunk_FUN_1009f30c(0x14,DAT_1009e9f0);
  piVar1 = DAT_1009e9f4;
  if (puVar4 != (undefined4 *)0x0) {
    uVar7 = *puVar9;
    iVar2 = puVar9[1];
    puVar5 = (undefined4 *)*DAT_1009e9f4;
    puVar4[4] = puVar9;
    puVar4[1] = uVar7;
    puVar4[3] = iVar2;
    if (puVar5 == (undefined4 *)0x0) {
LAB_1009e946:
      iVar2 = FUN_1011db7e(iVar2,*(undefined2 *)(puVar9 + 2),puVar9[6],puVar9[3],puVar9[4],puVar9[5]
                           ,0xfffffff0,0,0);
      puVar4[2] = iVar2;
      if (iVar2 == 0) {
        uVar6 = *puVar9;
        uVar3 = (DAT_1009e9cc - DAT_1009e9c8) * 0x20 & 0xff00U | 0x730000;
        uVar7 = DAT_1009e9ec;
      }
      else {
        FUN_10115218();
        FUN_10115194(puVar4[2],*(undefined1 *)((int)puVar9 + 10));
        FUN_10113564(puVar4[2],*puVar9);
        *puVar4 = 0;
        if ((undefined4 *)piVar1[1] == (undefined4 *)0x0) {
          *piVar1 = (int)puVar4;
          piVar1[1] = (int)puVar4;
        }
        else {
          *(undefined4 *)piVar1[1] = puVar4;
          piVar1[1] = (int)puVar4;
        }
        iVar2 = FUN_1009ec10(puVar4[1],puVar4[2]);
        if (iVar2 != 0) goto LAB_1009e916;
        uVar6 = puVar4[1];
        uVar3 = (DAT_1009e9cc - DAT_1009e9c8) * 0x20 & 0xff00U | 0x6e0000;
        uVar7 = DAT_1009e9d8;
      }
      FUN_100a5b78(uVar3 | 0x11,DAT_1009e9dc,uVar7,uVar6);
    }
    else {
      puVar8 = (undefined4 *)*puVar5;
      while (iVar2 != puVar5[3]) {
        if (puVar8 == (undefined4 *)0x0) goto LAB_1009e946;
        puVar5 = puVar8;
        puVar8 = (undefined4 *)*puVar8;
      }
      FUN_100a5b78((DAT_1009e9cc - DAT_1009e9c8) * 0x20 & 0xff00U | 0x590031,DAT_1009e9dc,
                   DAT_1009e9e8);
    }
    FUN_1012d1f4(puVar4);
  }
  FUN_100a5b78((DAT_1009e9cc - DAT_1009e9c8) * 0x20 & 0xff00U | 0xfe0011,DAT_1009e9d4,DAT_1009e9e0);
  iVar2 = 0;
LAB_1009e916:
  FUN_10113e2c(DAT_1009e9e4);
  return iVar2;
}

