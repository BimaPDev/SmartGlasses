/* FUN_2c4f6ab8 @ 0x2c4f6ab8 */

void FUN_2c4f6ab8(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_lr;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  puVar2 = DAT_2c4f6b84;
  local_24 = *DAT_2c4f6b80;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  iVar5 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    iVar5 = getBasePriority();
  }
  if (iVar5 != 0x40) {
    *DAT_2c4f6b84 = 0x2c4f6ae4;
    puVar2[1] = unaff_lr;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x40);
  }
  FUN_2c674208(param_1,0,2,0x40);
  FUN_2c673da8(param_1,param_3,&local_34,&local_2c,&local_30,&local_28);
  iVar4 = local_28;
  iVar3 = local_2c;
  if (local_2c + local_28 == param_3) {
    FUN_2c674668(param_2,local_34,local_2c);
    FUN_2c674668(param_2 + iVar3,local_30,iVar4);
    FUN_2c674208(param_1,0,param_3);
    FUN_2c674268(local_34,0,local_2c);
    FUN_2c674268(local_30,0,local_28);
  }
  else {
    FUN_2c674268(param_2,0,param_3);
  }
  if (iVar5 == 0) {
    *DAT_2c4f6b84 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(iVar5);
  }
  if (*DAT_2c4f6b80 == local_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

