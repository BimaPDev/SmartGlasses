/* FUN_14034a50 @ 0x14034a50 */

/* WARNING: Instruction at (ram,0x14044ab0) overlaps instruction at (ram,0x14044aae)
    */

void FUN_14034a50(undefined1 *param_1,undefined4 param_2)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 auStack_138 [268];
  int iStack_2c;
  int *piStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined1 *local_14;
  
  piVar2 = DAT_14034b60;
  iVar9 = *DAT_14034b60;
  if (iVar9 == 0) {
    uVar10 = FUN_1402e55c();
    iVar9 = *piVar2;
    *piVar2 = iVar9 + 1;
    switch(param_2) {
    case 0:
      uStack_24 = 0x14034b3d;
      piStack_28 = piVar2;
      iStack_2c = *DAT_14044b54;
      FUN_1402a6e8(4,0x5b2,DAT_14044b58,DAT_14044b5c,DAT_14044b4c,DAT_14044b50);
      auStack_138[0] = 0xf;
      FUN_14041ad8(auStack_138,0);
      if (*DAT_14044b54 == iStack_2c) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_14039adc();
    case 2:
LAB_14044aa6:
      puVar6 = DAT_14044af8;
      uVar7 = *(undefined4 *)((int)piVar2 + 0xe42);
      uVar1 = *DAT_14044af8;
      *param_1 = 3;
      *puVar6 = uVar1 & 0xfff7;
      *(char *)piVar2 = '\x01';
      FUN_140e52d8(uVar7);
      FUN_14048958(param_2,param_2,DAT_14044afc);
      return;
    case 3:
      FUN_1402a6e8((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_14044af4);
      iVar9 = FUN_140e5148(*(undefined4 *)((int)piVar2 + 0xe42),0xffffffff);
      puVar6 = DAT_14044af8;
      if (iVar9 == 0) {
        param_2 = 0;
        if ((char)*piVar2 != '\0') {
          uVar7 = *(undefined4 *)((int)piVar2 + 0xe42);
          uVar1 = *DAT_14044af8;
          *(char *)((int)piVar2 + 0xc5f) = '\x01';
          *puVar6 = uVar1 | 8;
          FUN_140e52d8(uVar7);
          return;
        }
        goto LAB_14044aa6;
      }
      uVar10 = CONCAT44(DAT_14044b00,0x710);
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
    }
  }
  else {
    *DAT_14034b60 = iVar9 + 1;
    local_20 = DAT_14034b80;
    uVar5 = DAT_14034b7c;
    uVar4 = DAT_14034b78;
    uVar7 = DAT_14034b6c;
    local_1c = DAT_14034b68;
    iVar3 = DAT_14034b64;
    switch(param_2) {
    case 0:
      *(uint *)(DAT_14034b64 + 0xc98) = *(uint *)(DAT_14034b64 + 0xc98) & 0xfffffc00 | (uint)param_1
      ;
      uStack_18 = *(undefined4 *)(iVar3 + 0xc98);
      uVar8 = 0xc63;
      break;
    case 1:
      *(uint *)(DAT_14034b64 + 0xd0c) = *(uint *)(DAT_14034b64 + 0xd0c) & 0xfffffc00 | (uint)param_1
      ;
      uStack_18 = *(undefined4 *)(iVar3 + 0xd0c);
      uVar8 = 0xc6a;
      local_20 = uVar5;
      break;
    case 2:
      *(uint *)(DAT_14034b64 + 0xd14) = *(uint *)(DAT_14034b64 + 0xd14) & 0xfffffc00 | (uint)param_1
      ;
      uStack_18 = *(undefined4 *)(iVar3 + 0xd14);
      uVar8 = 0xc71;
      local_20 = uVar4;
      break;
    case 3:
      *(uint *)(DAT_14034b64 + 0xd1c) = *(uint *)(DAT_14034b64 + 0xd1c) & 0xfffffc00 | (uint)param_1
      ;
      uStack_18 = *(undefined4 *)(iVar3 + 0xd1c);
      uVar8 = 0xc78;
      local_20 = uVar7;
      break;
    default:
      *piVar2 = iVar9;
      return;
    }
    local_14 = param_1;
    FUN_1402a6e8(4,uVar8,DAT_14034b74,DAT_14034b70);
    iVar9 = *piVar2 + -1;
  }
  *piVar2 = iVar9;
  if (iVar9 != 0) {
    return;
  }
  FUN_1402e5f8();
  return;
}

