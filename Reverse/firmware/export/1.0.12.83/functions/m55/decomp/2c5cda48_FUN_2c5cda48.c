/* FUN_2c5cda48 @ 0x2c5cda48 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5cda48(int param_1)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  local_14 = *_FUN_2c5cdb04;
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 8) == 0)) goto LAB_2c5cda6e;
  local_1c = 0;
  local_18 = 0;
  iVar1 = FUN_2c673c58(&local_1c);
  if (iVar1 != 0) goto LAB_2c5cda6e;
  if ((local_1c & 0xffff) == 2000) {
    if (local_1c._2_2_ == 0) {
      if (local_18._2_1_ == 0 && local_18._1_1_ == 0) {
        FUN_2c620fa4(0x3e9,*(undefined4 *)(param_1 + 0x10));
        goto LAB_2c5cda6e;
      }
      goto LAB_2c5cda90;
    }
  }
  else if (local_1c._2_2_ == 0) {
LAB_2c5cda90:
    if ((char)local_18 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(3,uRam2c5cdb10,0x10d,uRam2c5cdb0c,uRam2c5cdb08);
    }
  }
  puVar2 = *(uint **)(param_1 + 4);
  puVar2[5] = (local_1c & 0xffff) - 0x76c;
  puVar2[1] = (uint)local_18._2_1_;
  puVar2[2] = (uint)local_18._1_1_;
  puVar2[4] = (local_1c >> 0x10 & 0xff) - 1;
  *puVar2 = local_18 >> 0x18;
  puVar2[3] = local_1c >> 0x18;
  puVar2[6] = (local_18 & 0xff) - 1;
  uVar3 = FUN_2c6697dc(*(undefined4 *)(param_1 + 4));
  *(undefined8 *)(param_1 + 0x70) = uVar3;
LAB_2c5cda6e:
  if (*_FUN_2c5cdb04 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

