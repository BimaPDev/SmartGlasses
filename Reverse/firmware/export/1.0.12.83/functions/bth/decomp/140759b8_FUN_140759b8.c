/* FUN_140759b8 @ 0x140759b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_140759b8(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  uint *puVar2;
  char *pcVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  
  puVar5 = _LAB_14075ac0;
  if (0x7f < param_1) {
    puVar5 = _LAB_14075ac4;
  }
  if (0x17ff < param_1 - 1) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x44,_LAB_14075ad0,param_1,1,param_2,param_3);
  }
  puVar4 = (undefined2 *)FUN_140a2734(*puVar5,param_1 + 8 & 0xffff);
  pcVar3 = _LAB_14075acc;
  puVar2 = _LAB_14075ac8;
  if (puVar4 == (undefined2 *)0x0) {
    if (param_4 != 0) {
      return (undefined2 *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x4044,_LAB_14075adc,param_1,0x80,param_2,param_3);
  }
  *(undefined4 *)(puVar4 + 2) = param_2;
  cVar1 = *pcVar3;
  uVar6 = *puVar2;
  puVar4[1] = (short)param_3;
  uVar6 = uVar6 + 1;
  *puVar2 = uVar6;
  *puVar4 = (short)uVar6;
  if (cVar1 == '\0') {
    return puVar4 + 4;
  }
  uVar7 = *(uint *)(puVar4 + -2) & 0xfffffffc;
  if ((uVar7 != 0) && ((int)uVar7 <= (int)(puVar4 + -2))) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x4042,_LAB_14075ad8,uVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x47,_LAB_14075ad4,puVar4 + 4,param_1,uVar6 & 0xffff,param_2,param_3,
               (uint)(puVar4 + -2) & 0xffff,uVar7);
}

