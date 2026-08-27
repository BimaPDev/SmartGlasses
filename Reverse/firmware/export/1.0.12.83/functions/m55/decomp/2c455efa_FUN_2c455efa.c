/* FUN_2c455efa @ 0x2c455efa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c455efa(undefined4 param_1,undefined4 param_2,undefined1 param_3,int param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int extraout_r1;
  undefined2 *puVar3;
  int extraout_r3;
  int iVar4;
  int unaff_r4;
  undefined1 *puVar5;
  undefined4 *unaff_r5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined4 uStack000001b0;
  
  cVar1 = *(char *)(unaff_r4 * 2);
  puVar5 = (undefined1 *)*unaff_r5;
  iVar8 = unaff_r5[1];
  iVar6 = param_4 + 2;
  *(undefined1 *)(param_4 + 6) = param_3;
  iVar4 = (int)cVar1 << 0xf;
  puVar2 = *(undefined4 **)(puVar5 + cVar1);
  puVar3 = (undefined2 *)(puVar5 + iVar6);
  puVar9 = &stack0x0000013c;
  uStack000001b0 = param_1;
  while( true ) {
    *puVar2 = puVar3;
    puVar2[1] = puVar5;
    puVar2[2] = iVar6;
    puVar2[3] = iVar8;
    puVar2[4] = puVar9;
    if (iVar4 != 0) break;
    *puVar3 = (short)iVar8;
    uVar7 = (uint)DAT_0000000a;
    iVar4 = func_0x2d305bb8(puVar2 + 5,(int)(puVar2 + 5) >> 0xe,&stack0x0000009c);
    *(char *)(iVar4 * 2) = (char)iVar8;
    puVar5 = &LAB_2c455e54;
    iVar8 = func_0x2c652d38();
    *(int *)(extraout_r3 * 2) = iVar8;
    func_0x2d253246(iVar8 << 2);
    *(undefined1 *)(*(ushort *)(extraout_r1 + 0x1c) + 0x15) = 0x54;
    *(undefined1 *)((uVar7 - 6 >> 9) + 0x1f) = 0x54;
    iVar4 = extraout_r1 * 0x800000 + -3;
    iVar8 = _LAB_2c45595c;
    if (_Reserved6 < 0x7d) {
      iVar8 = (_Reserved6 - 0x7d) * 0x4000;
    }
    puVar2 = *(undefined4 **)(iVar8 + 0x60);
    iVar6 = iVar8 << 3;
    puVar3 = _PendSV;
    puVar9 = _LAB_2c455a7c;
  }
  *(short *)(iVar6 + 6) = (short)puVar3;
  FUN_2c606e38();
  FUN_2c606e20(iVar6,puVar9,0);
  FUN_2c607048(iVar6,0x2064,0x27d1);
  FUN_2c606e5c(iVar6,1,0);
  FUN_2c606da8(0x2c45613c,1,0);
  FUN_2c606d9c(0x2c45613c,1,0);
  FUN_2c606d84(0x2c45613c,puVar9,0);
  FUN_2c606d30(0x2c45613c,2,0);
  FUN_2c606d3c(0x2c45613c,2,0);
  FUN_2c606d18(0x2c45613c,2,0);
  FUN_2c606d24(0x2c45613c,2,0,param_1);
  return;
}

