/* FUN_14044c48 @ 0x14044c48 */

void FUN_14044c48(int param_1,undefined4 *param_2,char param_3,undefined2 param_4)

{
  ushort uVar1;
  char cVar2;
  undefined1 uVar3;
  char *pcVar4;
  ushort *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  
  pcVar4 = DAT_14044db0;
  if (param_1 != 0) {
    if (DAT_14044db0[0xc6d] != '\0') {
      if (DAT_14044db0[0xc79] == '\0') {
        iVar7 = 1;
        DAT_14044db0[0xc79] = '\x01';
        goto LAB_14044ce2;
      }
      goto LAB_14044ca4;
    }
    DAT_14044db0[0xc6d] = '\x01';
    iVar7 = 0;
    goto LAB_14044ce2;
  }
  cVar2 = DAT_14044db0[0xc6d];
  if (cVar2 == '\0') {
    if (DAT_14044db0[0xc79] != '\0') {
LAB_14044c7e:
      iVar7 = FUN_140db784(DAT_14044db4,param_2,7);
      if (iVar7 == 0) {
LAB_14044d86:
        FUN_1402a6e8(4,0x61d,DAT_14044dc8,DAT_14044dc4,DAT_14044dd8,DAT_14044db8);
        return;
      }
      if (cVar2 != '\0') {
LAB_14044ca4:
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_14044dbc,DAT_14044db8,2);
      }
    }
    iVar7 = 0;
    pcVar4[0xc6d] = '\x01';
    iVar9 = 0xc72;
  }
  else {
    iVar7 = FUN_140db784(DAT_14044db0 + 0xc72,param_2,7);
    if (iVar7 == 0) goto LAB_14044d86;
    if (pcVar4[0xc79] != '\0') goto LAB_14044c7e;
    iVar7 = 1;
    iVar9 = 0xc7e;
    pcVar4[0xc79] = '\x01';
  }
  *(undefined4 *)(pcVar4 + iVar9) = *param_2;
  cVar2 = *(char *)((int)param_2 + 6);
  *(undefined2 *)(pcVar4 + iVar9 + 4) = *(undefined2 *)(param_2 + 1);
  pcVar4[iVar9 + 6] = cVar2;
LAB_14044ce2:
  puVar6 = DAT_14044ddc;
  cVar2 = *pcVar4;
  uVar3 = *DAT_14044ddc;
  pcVar4[iVar7 * 0xc + 0xc6e] = (char)param_1;
  pcVar4[iVar7 * 0xc + 0xc71] = param_3;
  *(undefined2 *)(pcVar4 + iVar7 * 0xc + 0xc6f) = param_4;
  FUN_1402a6e8(4,0x635,DAT_14044dc8,DAT_14044dc4,DAT_14044dc0,DAT_14044db8,cVar2,uVar3);
  iVar7 = FUN_140e5148(*(undefined4 *)(pcVar4 + 0xe42),0xffffffff);
  puVar5 = DAT_14044dcc;
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x710,DAT_14044dd4);
  }
  if (*pcVar4 != '\0') {
    uVar8 = *(undefined4 *)(pcVar4 + 0xe42);
    *DAT_14044dcc = *DAT_14044dcc | 0x10;
    FUN_140e52d8(uVar8);
    return;
  }
  uVar8 = *(undefined4 *)(pcVar4 + 0xe42);
  uVar1 = *DAT_14044dcc;
  *puVar6 = 4;
  *puVar5 = uVar1 & 0xffef;
  *pcVar4 = '\x01';
  FUN_140e52d8(uVar8);
  FUN_14048958(0,0,DAT_14044dd0);
  return;
}

