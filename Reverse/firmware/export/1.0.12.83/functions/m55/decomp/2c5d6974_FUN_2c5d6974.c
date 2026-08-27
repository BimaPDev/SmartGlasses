/* FUN_2c5d6974 @ 0x2c5d6974 */

void FUN_2c5d6974(int param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 *extraout_r1;
  undefined4 uVar5;
  undefined4 extraout_s1;
  undefined8 uVar6;
  char *local_18;
  uint local_14;
  
  local_14 = *DAT_2c5d69e0;
  puVar4 = param_2;
  if (param_1 != 0) {
    iVar2 = FUN_2c48e83c();
    if (iVar2 != 0) {
      uVar5 = FUN_2c48de20(param_1);
      uVar5 = VectorFloatToSigned(CONCAT44(extraout_s1,uVar5),3);
      bVar1 = true;
      *param_2 = uVar5;
      puVar4 = extraout_r1;
      goto LAB_2c5d699e;
    }
    uVar6 = FUN_2c48de10(param_1);
    puVar4 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
    pcVar3 = (char *)uVar6;
    if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
      uVar6 = FUN_2c66d418(pcVar3,&local_18,10);
      puVar4 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
      *param_2 = (int)uVar6;
      bVar1 = *local_18 == '\0';
      goto LAB_2c5d699e;
    }
  }
  bVar1 = false;
LAB_2c5d699e:
  if ((*DAT_2c5d69e0 ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(bVar1,puVar4,*DAT_2c5d69e0 ^ local_14,0);
}

