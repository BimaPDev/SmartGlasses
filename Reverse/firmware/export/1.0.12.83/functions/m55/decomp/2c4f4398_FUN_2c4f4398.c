/* FUN_2c4f4398 @ 0x2c4f4398 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c4f4398(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint auStack_5c [3];
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  iStack_24 = *_LAB_2c4f4554;
  iVar4 = FUN_2c4f1060();
  uVar3 = _LAB_2c4f4580;
  uVar2 = _LAB_2c4f457c;
  uVar1 = _LAB_2c4f4578;
  if (iVar4 == 0) {
    iStack_28 = 1;
    uVar5 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    iStack_2c = 0;
    do {
      if (*(uint *)(*(int *)(param_1 + 0x68) + 0x20) >> 1 <= uVar5) {
        iVar4 = -0x54;
        goto LAB_2c4f44de;
      }
      uStack_60 = 8;
      uVar5 = uVar5 + 1;
      uStack_64 = uVar1;
      iStack_68 = param_1;
      iVar4 = FUN_2c4f1b28(param_1,&uStack_44,&iStack_2c,_DAT_2c4f455c,_LAB_2c4f4558,0,uVar2,
                           &iStack_68);
      if (iVar4 < 0) goto LAB_2c4f44de;
      if ((iVar4 != 0) && ((iVar4 << 0x16) >> 0x16 != -1)) {
        *(undefined4 *)(param_1 + 0x20) = uStack_44;
        *(undefined4 *)(param_1 + 0x24) = uStack_40;
        iVar4 = FUN_2c4f221c(param_1,&uStack_44,_DAT_2c4f455c,uVar3,0,auStack_5c,0x18);
        if (iVar4 < 0) goto LAB_2c4f44de;
        if ((auStack_5c[0] >> 0x10 != 2) || ((auStack_5c[0] & 0xffff) != 0)) {
          iVar4 = -0x16;
          FUN_2c66ac44(_LAB_2c4f4568,_LAB_2c4f4564,0xe8e,auStack_5c[0] >> 0x10,
                       auStack_5c[0] & 0xffff,_LAB_2c4f4560);
          goto LAB_2c4f44de;
        }
        if (uStack_50 != 0) {
          if (*(uint *)(param_1 + 0x6c) < uStack_50) {
            iVar4 = -0x16;
            FUN_2c66ac44(_LAB_2c4f456c,_LAB_2c4f4564,0xe97,uStack_50,*(uint *)(param_1 + 0x6c),
                         _LAB_2c4f4560);
            goto LAB_2c4f44de;
          }
          *(uint *)(param_1 + 0x6c) = uStack_50;
        }
        if (uStack_4c != 0) {
          if (*(uint *)(param_1 + 0x70) < uStack_4c) {
            iVar4 = -0x16;
            FUN_2c66ac44(_LAB_2c4f4574,_LAB_2c4f4564,0xea2,uStack_4c,*(uint *)(param_1 + 0x70),
                         _LAB_2c4f4560);
            goto LAB_2c4f44de;
          }
          *(uint *)(param_1 + 0x70) = uStack_4c;
        }
        if (uStack_48 != 0) {
          if (*(uint *)(param_1 + 0x74) < uStack_48) {
            iVar4 = -0x16;
            FUN_2c66ac44(_LAB_2c4f4570,_LAB_2c4f4564,0xead,uStack_48,*(uint *)(param_1 + 0x74),
                         _LAB_2c4f4560);
            goto LAB_2c4f44de;
          }
          *(uint *)(param_1 + 0x74) = uStack_48;
        }
      }
      iVar4 = FUN_2c4f23d8(param_1,&uStack_44,(undefined4 *)(param_1 + 0x30));
      if (iVar4 != 0) goto LAB_2c4f44de;
    } while ((iStack_2c != -1) && (iStack_28 != -1));
    if ((*(int *)(param_1 + 0x20) == -1) || (*(int *)(param_1 + 0x24) == -1)) {
      iVar4 = -0x16;
LAB_2c4f44de:
      FUN_2c4f101c(param_1);
    }
    else {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - (*(int *)(param_1 + 0x30) >> 0x1f);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x38);
      uVar5 = *(uint *)(*(int *)(param_1 + 0x68) + 0x20);
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(uint *)(param_1 + 0x54) =
           *(uint *)(param_1 + 0x2c) - uVar5 * (*(uint *)(param_1 + 0x2c) / uVar5);
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(*(int *)(param_1 + 0x68) + 0x20);
    }
  }
  if (*_LAB_2c4f4554 == iStack_24) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

