/* FUN_2c635f18 @ 0x2c635f18 */

/* WARNING: Removing unreachable block (ram,0x2c6356dc) */

void FUN_2c635f18(int param_1,byte param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 unaff_r4;
  uint uVar5;
  undefined4 unaff_r5;
  ushort uVar6;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  
  *(byte *)(param_1 + 0x36) = *(byte *)(param_1 + 0x36) & 0xfe | param_2 & 1;
  if (*(short *)(param_1 + 0x30) != 0) {
    puVar2 = *(ushort **)(param_1 + 0x2c);
    uVar5 = 0;
    uVar6 = *puVar2;
    uVar3 = uVar6 & 0x80;
    while( true ) {
      puVar2[uVar5] = uVar6 & 0xff7f;
      uVar4 = (uint)*(ushort *)(param_1 + 0x30);
      if ((uVar5 != 0xffff) && (uVar5 < uVar4)) {
        FUN_2c6352cc(param_1,uVar5,puVar2,uVar4,param_4);
        uVar4 = (uint)*(ushort *)(param_1 + 0x30);
      }
      uVar5 = uVar5 + 1 & 0xffff;
      if (uVar4 <= uVar5) break;
      puVar2 = *(ushort **)(param_1 + 0x2c);
      uVar6 = puVar2[uVar5];
    }
    if ((uVar3 != 0) && (uVar5 = (uint)(uVar4 == 0), uVar4 != 0)) {
      if (((int)((uint)*(byte *)(param_1 + 0x36) << 0x1f) < 0) && (*(short *)(param_1 + 0x30) != 0))
      {
        uVar6 = 0;
        do {
          *(ushort *)(*(int *)(param_1 + 0x2c) + (uint)uVar6 * 2) =
               *(ushort *)(*(int *)(param_1 + 0x2c) + (uint)uVar6 * 2) & 0xff7f;
          uVar3 = *(ushort *)(param_1 + 0x30);
          if ((uVar6 != 0xffff) && (uVar6 < uVar3)) {
            FUN_2c6352cc(param_1);
            uVar3 = *(ushort *)(param_1 + 0x30);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar3);
      }
      iVar1 = *(int *)(param_1 + 0x2c);
      *(ushort *)(iVar1 + uVar5 * 2) = *(ushort *)(iVar1 + uVar5 * 2) | 0x80;
      if ((uVar5 != 0xffff) && (uVar5 < *(ushort *)(param_1 + 0x30))) {
        FUN_2c6352cc(param_1,uVar5,iVar1,(uint)*(ushort *)(param_1 + 0x30),unaff_r4,unaff_r5,
                     unaff_r6,unaff_r7);
      }
      return;
    }
  }
  return;
}

