/* FUN_2c6019b8 @ 0x2c6019b8 */

void FUN_2c6019b8(int *param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  undefined4 local_24;
  undefined4 local_20;
  ushort local_1c;
  undefined2 local_1a;
  ushort local_18;
  undefined2 local_16;
  int local_14;
  
  local_14 = *DAT_2c601b4c;
  if (((param_1 == (int *)0x0) && (param_1 = (int *)FUN_2c62a470(), param_1 == (int *)0x0)) ||
     (iVar4 = FUN_2c5fef48(param_1), iVar4 == 0)) goto LAB_2c601a52;
  bVar1 = *(byte *)(param_1 + 0xb);
  if ((bVar1 & 4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,DAT_2c601b58,0xf9,DAT_2c601b54,DAT_2c601b50);
  }
  if (param_2 == 0) {
    *(undefined2 *)(param_1 + 0x56) = 0;
    goto LAB_2c601a52;
  }
  local_24 = CONCAT12(bVar1,(ushort)bVar1) & 0x40004;
  sVar2 = FUN_2c62a47c(param_1);
  local_20 = CONCAT22(local_20._2_2_,sVar2 + -1);
  sVar2 = FUN_2c62a4a0(param_1);
  local_20 = CONCAT22(sVar2 + -1,(undefined2)local_20);
  iVar4 = FUN_2c62a6b4(&local_1c,param_2,&local_24);
  if (iVar4 == 0) goto LAB_2c601a52;
  iVar4 = *param_1;
  if ((int)((uint)*(byte *)(iVar4 + 0x10) << 0x1e) < 0) {
    param_1[0xe] = local_24;
    param_1[0xf] = local_20;
    iVar4 = param_1[1];
    *(undefined2 *)(param_1 + 0x56) = 1;
  }
  else {
    if (*(code **)(iVar4 + 0x18) != (code *)0x0) {
      (**(code **)(iVar4 + 0x18))(iVar4,&local_1c);
    }
    uVar5 = 0;
    if ((short)param_1[0x56] == 0) {
LAB_2c601ad0:
      if ((((short)local_18 + 1) - (int)(short)local_1c & 0xfU) != 0) {
        sVar2 = FUN_2c62a47c(param_1);
        uVar6 = sVar2 - 1;
        uVar3 = uVar6;
        if (0xf < (short)local_1c) {
          uVar3 = local_1c & 0xfff0;
        }
        if ((short)local_1c < 0x10) {
          uVar3 = 0;
        }
        iVar4 = (int)(short)local_18 + 0xf;
        if (((int)(short)local_18 & 0xfU) == 0) {
          if (iVar4 < (short)uVar6) {
            uVar6 = (ushort)iVar4 | 0xf;
          }
        }
        else if (iVar4 < (short)uVar6) {
          uVar6 = ((ushort)iVar4 & 0xfff0) - 1;
        }
        uVar5 = (uint)*(ushort *)(param_1 + 0x56);
        local_1c = uVar3;
        local_18 = uVar6;
      }
      sVar2 = (short)uVar5 + 1;
      *(ushort *)(param_1 + uVar5 * 2 + 0xe) = local_1c;
      *(ushort *)(param_1 + uVar5 * 2 + 0xf) = local_18;
      *(undefined2 *)((int)param_1 + uVar5 * 8 + 0x3a) = local_1a;
      *(undefined2 *)((int)param_1 + uVar5 * 8 + 0x3e) = local_16;
    }
    else {
      uVar6 = 0;
      do {
        iVar4 = FUN_2c62a998(&local_1c,param_1 + (uVar6 + 7) * 2,0);
        if (iVar4 != 0) goto LAB_2c601a52;
        uVar6 = uVar6 + 1;
        uVar5 = (uint)*(ushort *)(param_1 + 0x56);
      } while (uVar6 < uVar5);
      if (uVar5 < 0x20) goto LAB_2c601ad0;
      *(undefined2 *)((int)param_1 + 0x3a) = local_24._2_2_;
      sVar2 = 1;
      *(undefined2 *)(param_1 + 0xe) = (undefined2)local_24;
      *(undefined2 *)(param_1 + 0xf) = (undefined2)local_20;
      *(undefined2 *)((int)param_1 + 0x3e) = local_20._2_2_;
    }
    iVar4 = param_1[1];
    *(short *)(param_1 + 0x56) = sVar2;
  }
  if (iVar4 != 0) {
    FUN_2c62be4c();
  }
LAB_2c601a52:
  if (*DAT_2c601b4c == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

