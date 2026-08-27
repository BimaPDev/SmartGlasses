/* FUN_2c4c531c @ 0x2c4c531c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_2c4c531c(int param_1,int param_2,int param_3,undefined1 param_4,undefined1 param_5,int param_6)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  uint in_fpscr;
  float fVar12;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  iStack_2c = *_LAB_2c4c54ac;
  if (3 < (int)_LAB_2c4c54c0[param_2 + param_1 * 2] - 1U) {
    iVar10 = 0;
    pcVar8 = _LAB_2c4c54c0;
    do {
      while ((iVar10 != *pcVar8 + -1 && (iVar10 != pcVar8[1] + -1))) {
        pcVar8 = pcVar8 + 2;
        if (_LAB_2c4c54c0 + 10 == pcVar8) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,99,_LAB_2c4c54c8,_LAB_2c4c54d0,_LAB_2c4c54cc,_LAB_2c4c54c4,iVar10,param_1,param_2)
          ;
        }
      }
      iVar10 = iVar10 + 1;
      pcVar8 = _LAB_2c4c54c0;
    } while (iVar10 != 4);
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x69,_LAB_2c4c54c8,_LAB_2c4c54d0,_LAB_2c4c54d4,_LAB_2c4c54c4,param_1,param_2);
  }
  puVar9 = (undefined1 *)(((int)_LAB_2c4c54c0[param_2 + param_1 * 2] - 1U) * 0x74 + _LAB_2c4c54b0);
  *puVar9 = param_4;
  puVar9[8] = param_5;
  *(int *)(puVar9 + 4) = param_3;
  puVar9[9] = 1;
  *(int *)(puVar9 + 0xc) = param_6;
  uVar4 = uRam2c4c54bc;
  puVar3 = _LAB_2c4c54b8;
  uVar2 = _LAB_2c4c54b4;
  if (param_6 == 0) {
    fVar12 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
    uVar5 = _LAB_2c4c54b8[1];
    uVar6 = _LAB_2c4c54b8[2];
    uVar7 = _LAB_2c4c54b8[3];
    puVar11 = _LAB_2c4c54b8 + 4;
    *(undefined4 *)(puVar9 + 0x10) = *_LAB_2c4c54b8;
    *(undefined4 *)(puVar9 + 0x14) = uVar5;
    *(undefined4 *)(puVar9 + 0x18) = uVar6;
    *(undefined4 *)(puVar9 + 0x1c) = uVar7;
    uVar5 = puVar3[5];
    uVar6 = puVar3[6];
    uVar7 = puVar3[7];
    *(undefined4 *)(puVar9 + 0x20) = *puVar11;
    *(undefined4 *)(puVar9 + 0x24) = uVar5;
    *(undefined4 *)(puVar9 + 0x28) = uVar6;
    *(undefined4 *)(puVar9 + 0x2c) = uVar7;
    uVar5 = puVar3[9];
    *(undefined4 *)(puVar9 + 0x30) = puVar3[8];
    *(undefined4 *)(puVar9 + 0x34) = uVar5;
    *(undefined4 *)(puVar9 + 0x28) = uVar4;
    *(undefined4 *)(puVar9 + 0x2c) = uVar4;
    *(undefined4 *)(puVar9 + 0x30) = uVar4;
    *(undefined4 *)(puVar9 + 0x34) = uVar4;
    func_0x2c4c5a80(uVar4,30.0 / fVar12,0x3f000000,&uStack_44);
    *(undefined4 *)(puVar9 + 0x14) = uStack_34;
    *(undefined4 *)(puVar9 + 0x10) = uStack_38;
    *(undefined4 *)(puVar9 + 0x1c) = uStack_44;
    *(undefined4 *)(puVar9 + 0x18) = uStack_30;
    *(undefined4 *)(puVar9 + 0x20) = uStack_40;
    *(undefined4 *)(puVar9 + 0x24) = uStack_3c;
  }
  else if (param_6 == 1) {
    *(int *)(puVar9 + 0x38) = param_3;
    puVar9[0x50] = 1;
    *(undefined4 *)(puVar9 + 0x40) = 0;
    *(undefined4 *)(puVar9 + 0x44) = 0;
    *(undefined4 *)(puVar9 + 0x48) = 0;
    *(uint *)(puVar9 + 0x3c) = (uint)((ulonglong)uVar2 * (ulonglong)(uint)(param_3 * 1000) >> 0x26);
    *(undefined4 *)(puVar9 + 0x4c) = 0;
  }
  uVar2 = _LAB_2c4c54b4;
  *(undefined4 *)(puVar9 + 0x5c) = 0;
  *(int *)(puVar9 + 0x54) = param_3;
  *(undefined4 *)(puVar9 + 0x60) = 0x3f800000;
  *(undefined4 *)(puVar9 + 100) = 0x3f800000;
  *(uint *)(puVar9 + 0x58) = (uint)((ulonglong)uVar2 * (ulonglong)(uint)(param_3 * 100) >> 0x26);
  piVar1 = _LAB_2c4c54ac;
  *(undefined4 *)(puVar9 + 0x68) = 0x3f800000;
  puVar9[0x6c] = 1;
  if (*piVar1 != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 0;
}

