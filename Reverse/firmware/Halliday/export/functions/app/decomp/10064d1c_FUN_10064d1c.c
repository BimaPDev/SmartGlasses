/* FUN_10064d1c @ 0x10064d1c */

/* WARNING: Removing unreachable block (ram,0x10064de4) */

undefined4 FUN_10064d1c(int param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int local_2c;
  
  uVar6 = *(int *)(param_2 + 4) + 0xc;
  piVar5 = *(int **)(param_1 + 0x14);
  if (*DAT_10064e8c == 0) {
    uVar3 = 0xffffffed;
  }
  else {
    FUN_10113cfc(param_1 + 0x3c,param_2,0xffffffff,0xffffffff);
    if (((*param_2 == 0x21) &&
        (iVar2 = *(int *)(param_1 + 0x54), *(int *)(param_1 + 0x54) = iVar2 + 1, iVar2 != 0)) ||
       ((*param_2 == 0x22 &&
        (iVar2 = *(int *)(param_1 + 0x54), *(int *)(param_1 + 0x54) = iVar2 + -1, iVar2 != 1)))) {
      if (*(int *)(param_2 + 2) != 0) {
        FUN_10113fd0();
      }
LAB_10064e00:
      uVar3 = 0;
    }
    else {
      uVar4 = (DAT_10064e94 - DAT_10064e90) * 0x20 & 0xff00;
      local_2c = 0x32;
      do {
        uVar7 = (piVar5[2] + *piVar5) - piVar5[1];
        if (uVar6 <= uVar7) {
          sVar1 = *(short *)(param_1 + 0x12);
          *(short *)(param_1 + 0x12) = sVar1 + 1;
          param_2[1] = sVar1;
          iVar2 = FUN_1012d2f0(piVar5,param_2,uVar6);
          if (iVar2 == 0) {
            FUN_100a5b78(DAT_10064ea8 | uVar4,DAT_10064e9c,DAT_10064eac);
          }
          FUN_100a5b78(DAT_10064eb0 | uVar4,DAT_10064e9c,DAT_10064eb4,*param_2,
                       *(undefined4 *)(param_2 + 6),*(undefined4 *)(param_2 + 8),
                       *(undefined4 *)(param_2 + 4),param_2[1],uVar6,piVar5[1] - *piVar5);
          (**(code **)(*(int *)(*(int *)(param_1 + 0xc) + 8) + 0x10))
                    (*(int *)(param_1 + 0xc),*(undefined4 *)(param_1 + 4),0);
          goto LAB_10064e00;
        }
        FUN_1011dbc8(10);
        FUN_100a5b78(uVar4 | 0x1b20023,DAT_10064e9c,DAT_10064e98,uVar6,piVar5[6],piVar5[7]);
        local_2c = local_2c + -1;
      } while (local_2c != 0);
      FUN_100a5b78(DAT_10064ea0 | uVar4,DAT_10064e9c,DAT_10064ea4,uVar7,*param_2,uVar6);
      if (*param_2 == 0x21) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
      }
      else if (*param_2 == 0x22) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
      }
      uVar3 = 0xfffffff4;
    }
    FUN_10113e2c(param_1 + 0x3c);
  }
  return uVar3;
}

