/* FUN_14034b84 @ 0x14034b84 */

/* WARNING: Instruction at (ram,0x14044c0a) overlaps instruction at (ram,0x14044c08)
    */

void FUN_14034b84(uint param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int unaff_r7;
  undefined8 uVar7;
  int in_stack_000000f4;
  undefined4 local_18;
  undefined4 local_14;
  
  piVar1 = DAT_14034c88;
  iVar5 = *DAT_14034c88;
  if (iVar5 == 0) {
    uVar7 = FUN_1402e55c();
    iVar5 = (int)((ulonglong)uVar7 >> 0x20);
    iVar6 = *piVar1;
    *piVar1 = iVar6 + 1;
    switch(param_2) {
    case 0:
      FUN_14048958(*(undefined2 *)(param_1 + iVar5),iVar5,DAT_14044c44);
      return;
    case 1:
    case 2:
      *(int *)((int)uVar7 + unaff_r7) = unaff_r7;
      FUN_1402a6e8((int)uVar7,iVar5,&switchD_14034c70::switchdataD_14034c74);
      local_18 = CONCAT31(local_18._1_3_,0x13);
      local_14 = CONCAT31(local_14._1_3_,(char)unaff_r7);
      local_14 = CONCAT22((short)param_1,(undefined2)local_14);
      FUN_14041ad8(&local_18,0);
      if (*DAT_14044c28 == in_stack_000000f4) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_14039adc();
    case 3:
                    /* WARNING: Subroutine does not return */
      FUN_14039adc();
    }
  }
  else {
    *DAT_14034c88 = iVar5 + 1;
    uVar2 = DAT_14034c90;
    iVar6 = DAT_14034c8c;
    switch(param_2) {
    case 0:
      *(uint *)(DAT_14034c8c + 0xc94) =
           *(uint *)(DAT_14034c8c + 0xc94) & 0xf0000000 | param_1 & 0xfffffff;
      local_18 = *(undefined4 *)(iVar6 + 0xc94);
      uVar3 = 0xca8;
      uVar4 = DAT_14034ca8;
      break;
    case 1:
      *(uint *)(DAT_14034c8c + 0xd08) =
           *(uint *)(DAT_14034c8c + 0xd08) & 0xf0000000 | param_1 & 0xfffffff;
      local_18 = *(undefined4 *)(iVar6 + 0xd08);
      uVar3 = 0xcaf;
      uVar4 = DAT_14034ca4;
      break;
    case 2:
      *(uint *)(DAT_14034c8c + 0xd10) =
           *(uint *)(DAT_14034c8c + 0xd10) & 0xf0000000 | param_1 & 0xfffffff;
      local_18 = *(undefined4 *)(iVar6 + 0xd10);
      uVar3 = 0xcb6;
      uVar4 = DAT_14034ca0;
      break;
    case 3:
      uVar3 = 0xcbd;
      *(uint *)(DAT_14034c8c + 0xd18) =
           *(uint *)(DAT_14034c8c + 0xd18) & 0xf0000000 | param_1 & 0xfffffff;
      local_18 = *(undefined4 *)(iVar6 + 0xd18);
      uVar4 = DAT_14034c94;
      break;
    default:
      *piVar1 = iVar5;
      return;
    }
    local_14 = param_1;
    FUN_1402a6e8(4,uVar3,DAT_14034c9c,DAT_14034c98,uVar4,uVar2);
    iVar6 = *piVar1 + -1;
  }
  *piVar1 = iVar6;
  if (iVar6 != 0) {
    return;
  }
  FUN_1402e5f8();
  return;
}

