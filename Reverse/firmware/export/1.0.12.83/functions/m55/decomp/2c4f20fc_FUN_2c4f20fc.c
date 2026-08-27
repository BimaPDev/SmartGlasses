/* FUN_2c4f20fc @ 0x2c4f20fc */

void FUN_2c4f20fc(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  int local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  uint local_24;
  
  uVar3 = DAT_2c4f2198;
  uVar2 = DAT_2c4f2194;
  uVar1 = DAT_2c4f2190;
  uVar5 = 0;
  local_24 = *DAT_2c4f218c;
  *(undefined4 *)(param_3 + 0x18) = 0;
  *(undefined4 *)(param_3 + 0x1c) = 1;
  puVar4 = param_2;
  do {
    if (*(uint *)(*(int *)(param_1 + 0x68) + 0x20) >> 1 <= uVar5) {
      uVar6 = CONCAT44(puVar4,0xffffffac);
      goto LAB_2c4f216e;
    }
    uStack_2c = *param_2;
    local_28 = param_2[1];
    local_30 = param_1;
    uVar6 = FUN_2c4f1b28(param_1,param_3,param_3 + 0x18,uVar3,uVar2,0,uVar1,&local_30);
    puVar4 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
    if (((int)uVar6 != 0) && ((int)uVar6 != -2)) goto LAB_2c4f216e;
  } while ((*(int *)(param_3 + 0x18) != -1) && (uVar5 = uVar5 + 1, *(int *)(param_3 + 0x1c) != -1));
  uVar6 = CONCAT44(puVar4,0xfffffffe);
LAB_2c4f216e:
  if ((*DAT_2c4f218c ^ local_24) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),*DAT_2c4f218c ^ local_24,0);
}

