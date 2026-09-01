/* FUN_1007e8dc @ 0x1007e8dc */

undefined4 FUN_1007e8dc(int *param_1,uint *param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  byte *pbVar3;
  uint *puVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [5];
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  int local_33;
  undefined1 *local_2f;
  
  iVar10 = param_1[3];
  pbVar3 = *(byte **)(iVar10 + 0x74);
  puVar4 = param_2;
  if (param_3 == 0) {
    puVar4 = (uint *)0xff;
  }
  uVar12 = *(uint *)((uint)*pbVar3 * 0x1c + iVar10 + 0x38);
  iVar7 = 0;
  if (param_3 != 0) {
    puVar4 = (uint *)0x0;
  }
  uVar9 = 0xffffffff;
  uVar13 = 0;
  sVar1 = *(short *)(iVar10 + 0x10c8);
  do {
    uVar5 = (uint)(ushort)(sVar1 + 1);
    if (uVar12 == uVar13) {
      if (iVar7 == 0) {
        if ((*(char *)(*param_1 + 0x10) != '\0') &&
           (pcVar6 = *(code **)(*param_1 + 0xc), pcVar6 != (code *)0x0)) {
          (*pcVar6)(DAT_1007e9dc,DAT_1007e9d8,0x8c);
        }
        FUN_1007e808(param_1);
        uVar8 = 0;
      }
      else {
        local_33 = iVar10 + 0xc6;
        local_2f = auStack_4c;
        local_37 = 0xf;
        local_36 = 0;
        local_35 = 0;
        local_34 = 0;
        FUN_10120a74(param_1,auStack_3c,(uint)*pbVar3,
                     *(ushort *)(*(int *)(pbVar3 + 0x10) + uVar9 * 2) & 0xfff,0);
        thunk_FUN_1007e6ec(param_1,auStack_3c);
        uVar8 = 1;
        *param_2 = uVar9;
        *(short *)(iVar10 + 0x10c8) = (short)uVar9;
      }
      return uVar8;
    }
    if (uVar5 == uVar12) {
      uVar5 = 0;
    }
    if ((*(ushort *)(*(int *)(pbVar3 + 0x10) + uVar5 * 2) & 0xfff) != 0xfff) {
      puVar11 = (uint *)(uint)(*(byte *)(*(int *)(pbVar3 + 0x10) + uVar5 * 2 + 1) >> 5);
      uVar2 = uVar5;
      if (param_3 == 0) {
        if (puVar4 <= puVar11) {
LAB_1007e96e:
          puVar11 = puVar4;
          uVar2 = uVar9;
        }
      }
      else if (puVar11 <= puVar4) goto LAB_1007e96e;
      uVar9 = uVar2;
      puVar4 = puVar11;
      iVar7 = iVar7 + 1;
    }
    sVar1 = (short)uVar5;
    uVar13 = uVar13 + 1;
  } while( true );
}

