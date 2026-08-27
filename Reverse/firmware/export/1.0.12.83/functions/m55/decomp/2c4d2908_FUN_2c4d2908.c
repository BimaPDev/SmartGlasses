/* FUN_2c4d2908 @ 0x2c4d2908 */

void FUN_2c4d2908(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int local_54 [4];
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  uint local_14;
  
  local_14 = *DAT_2c4d299c;
  cVar1 = *param_1;
  if (cVar1 < '\b') {
    if ('\x05' < cVar1) {
LAB_2c4d298a:
      iVar2 = *(int *)(param_1 + 0x70);
      if (iVar2 == 0xff) {
        iVar2 = -1;
      }
      goto LAB_2c4d2974;
    }
    if (cVar1 == '\x02') {
      if (*(ushort *)(param_1 + 0x7a) != 0x7ff) {
        local_54[0] = *DAT_2c4d29a0;
        local_54[1] = DAT_2c4d29a0[1];
        local_54[2] = DAT_2c4d29a0[2];
        local_54[3] = DAT_2c4d29a0[3];
        local_44 = DAT_2c4d29a0[4];
        iStack_40 = DAT_2c4d29a0[5];
        iStack_3c = DAT_2c4d29a0[6];
        iStack_38 = DAT_2c4d29a0[7];
        local_34 = DAT_2c4d29a0[8];
        iStack_30 = DAT_2c4d29a0[9];
        iStack_2c = DAT_2c4d29a0[10];
        iStack_28 = DAT_2c4d29a0[0xb];
        param_2 = DAT_2c4d29a0[0xd];
        local_24 = DAT_2c4d29a0[0xc];
        iStack_20 = param_2;
        iStack_1c = DAT_2c4d29a0[0xe];
        iStack_18 = DAT_2c4d29a0[0xf];
        iVar2 = ((uint)*(ushort *)(param_1 + 0x78) +
                (uint)*(ushort *)(param_1 + 0x7a) * local_54[(byte)param_1[0x72]] * 4) * 8;
        goto LAB_2c4d2974;
      }
    }
  }
  else if (cVar1 == '\n') goto LAB_2c4d298a;
  iVar2 = -1;
LAB_2c4d2974:
  uVar3 = *DAT_2c4d299c ^ *DAT_2c4d299c;
  if (uVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail(iVar2,param_2,uVar3,0);
  }
  return;
}

