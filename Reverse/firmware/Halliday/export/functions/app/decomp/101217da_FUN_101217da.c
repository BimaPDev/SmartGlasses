/* FUN_101217da @ 0x101217da */

undefined4 FUN_101217da(int param_1,uint param_2)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  undefined1 auStack_70 [3];
  char local_6d;
  ushort local_6c;
  ushort local_6a;
  undefined1 auStack_60 [3];
  char local_5d;
  ushort local_5c;
  ushort local_5a;
  undefined1 auStack_50 [5];
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  int local_47;
  undefined1 *local_43;
  undefined1 auStack_3c [5];
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  int local_33;
  undefined1 *local_2f;
  
  iVar8 = *(int *)(param_1 + 0xc);
  iVar4 = *(int *)(*(undefined1 **)(iVar8 + 0x74) + 0xc) + param_2 * 8;
  local_47 = iVar8 + 0xc6;
  local_43 = auStack_70;
  local_4a = 0;
  local_49 = 0;
  local_48 = 0;
  uVar3 = (uint)*(ushort *)(iVar4 + 4);
  uVar7 = *(ushort *)(iVar4 + 2) & 0xfff;
  local_4b = 0xf;
  if ((int)uVar3 < (int)(*(ushort *)(iVar8 + 0xc2) - 1)) {
    FUN_10120a74(param_1,auStack_50,**(undefined1 **)(iVar8 + 0x74),uVar7,uVar3 + 1);
    FUN_1007e320(param_1,auStack_50);
    if ((local_6d != -1) || ((local_6a & local_6c) != 0xffff)) {
      iVar4 = *(int *)(param_1 + 0xc);
      local_33 = iVar4 + 0xc6;
      local_2f = auStack_60;
      uVar3 = (uint)*(ushort *)(iVar4 + 0xc2);
      local_37 = 0xf;
      local_36 = 0;
      local_35 = 0;
      local_34 = 0;
      do {
        uVar3 = uVar3 - 1;
        if (uVar3 == 0xffffffff) goto LAB_101218c4;
        FUN_10120a74(param_1,auStack_3c,**(undefined1 **)(iVar4 + 0x74),uVar7,uVar3);
        FUN_1007e320(param_1,auStack_3c);
      } while ((local_5d == -1) && ((local_5a & local_5c) == 0xffff));
      if ((uVar3 < *(ushort *)(iVar8 + 0xc2)) &&
         (iVar4 = *(int *)(*(int *)(iVar8 + 0x74) + 0xc) + param_2 * 8,
         *(ushort *)(iVar4 + 4) != uVar3)) {
        *(short *)(iVar4 + 4) = (short)uVar3;
        FUN_101217c0(param_1);
      }
    }
  }
LAB_101218c4:
  FUN_1011ea48(*(undefined4 *)(*(int *)(iVar8 + 0x8c) + 8),0xff,(uint)*(ushort *)(iVar8 + 0xc2) << 1
              );
  uVar3 = 0;
  bVar2 = true;
  while( true ) {
    puVar5 = *(undefined1 **)(iVar8 + 0x74);
    if ((uint)*(ushort *)(*(int *)(puVar5 + 0xc) + param_2 * 8 + 4) < (uVar3 & 0xffff)) break;
    FUN_10120a74(param_1,auStack_50,*puVar5,uVar7,uVar3 & 0xffff);
    FUN_1007e320(param_1,auStack_50);
    uVar6 = (uint)local_6c;
    if (uVar6 != (uVar3 & 0xffff)) {
      bVar2 = false;
    }
    if ((uVar6 != 0xffff) && (uVar6 < *(ushort *)(iVar8 + 0xc2))) {
      iVar4 = *(int *)(*(int *)(iVar8 + 0x8c) + 8);
      *(ushort *)(iVar4 + uVar6 * 2) =
           *(ushort *)(iVar4 + uVar6 * 2) & 0xf000 | (ushort)uVar3 & 0xfff;
    }
    uVar3 = uVar3 + 1;
  }
  iVar8 = iVar8 + (uint)(byte)puVar5[1] * 2;
  uVar7 = *(ushort *)(iVar8 + 0x10ca);
  uVar1 = (ushort)(1 << (param_2 & 0xff));
  if (bVar2) {
    uVar7 = uVar7 | uVar1;
  }
  else {
    uVar7 = uVar7 & ~uVar1;
  }
  *(ushort *)(iVar8 + 0x10ca) = uVar7;
  return 1;
}

