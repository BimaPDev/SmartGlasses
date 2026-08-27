/* FUN_14064244 @ 0x14064244 */

int FUN_14064244(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined2 param_5,undefined2 param_6,undefined1 param_7,undefined4 *param_8,
                undefined2 param_9,byte param_10,undefined2 *param_11)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int local_30;
  int local_2c;
  
  local_2c = *DAT_1406437c;
  uVar9 = (uint)param_10;
  piVar2 = (int *)FUN_14066108(param_2);
  if (((piVar2 == (int *)0x0) || (*(int *)(*piVar2 + 0x24) == 0)) || (*(int *)(*piVar2 + 4) == 0)) {
    iVar3 = 0x42;
  }
  else {
    iVar3 = FUN_1406cc4c(param_1,param_2,param_3,param_4,0x17,uVar9 * 8 + 0x4c,DAT_14064380,
                         &local_30);
    if (iVar3 == 0) {
      *(undefined1 *)(local_30 + 0x42) = 0;
      if (uVar9 != 0) {
        iVar7 = local_30;
        do {
          uVar1 = *param_11;
          *(undefined2 *)(iVar7 + 0x46) = param_9;
          *(undefined2 *)(iVar7 + 0x44) = uVar1;
          sVar5 = param_11[1];
          *(undefined2 *)(iVar7 + 0x4a) = 0;
          if (sVar5 == 0) {
            sVar5 = -1;
          }
          *(short *)(iVar7 + 0x48) = sVar5;
          if (param_11[1] == 0) {
            *(undefined1 *)(local_30 + 0x42) = 1;
          }
          iVar7 = iVar7 + 8;
          param_11 = param_11 + 2;
        } while (iVar7 != local_30 + 8 + (uVar9 - 1 & 0xff) * 8);
      }
      *(byte *)(local_30 + 0x40) = param_10;
      *(undefined2 *)(local_30 + 0x2a) = param_6;
      *(undefined2 *)(local_30 + 0x28) = param_5;
      *(undefined1 *)(local_30 + 0x2e) = param_7;
      *(undefined1 *)(local_30 + 0x3f) = 0;
      if (param_8 != (undefined4 *)0x0) {
        uVar4 = param_8[1];
        uVar6 = param_8[2];
        uVar8 = param_8[3];
        *(undefined4 *)(local_30 + 0x2f) = *param_8;
        *(undefined4 *)(local_30 + 0x33) = uVar4;
        *(undefined4 *)(local_30 + 0x37) = uVar6;
        *(undefined4 *)(local_30 + 0x3b) = uVar8;
      }
      FUN_140739b4(local_30 + 0x20);
      FUN_1406d4d4(local_30);
      FUN_1406cdd0(param_1,local_30);
    }
  }
  if (*DAT_1406437c == local_2c) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

