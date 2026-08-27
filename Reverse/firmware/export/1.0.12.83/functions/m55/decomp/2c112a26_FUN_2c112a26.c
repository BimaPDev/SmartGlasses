/* FUN_2c112a26 @ 0x2c112a26 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c112b32) */
/* WARNING: Removing unreachable block (ram,0x2c112b46) */
/* WARNING: Removing unreachable block (ram,0x2c112afc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c112a26(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int unaff_r6;
  uint uVar5;
  undefined4 in_cr3;
  undefined8 in_d0;
  int iStack_c;
  
  iVar1 = _DAT_2c112d5c;
  uVar5 = (uint)*(ushort *)(param_2 * 0x200);
  puVar4 = (undefined4 *)((int)(uint)*(ushort *)(unaff_r6 + 0x24) >> 0xc);
  *puVar4 = (ushort *)(param_2 * 0x200);
  puVar4[1] = puVar4;
  puVar4[2] = uVar5;
  *(char *)(uVar5 + 0x1a) = (char)(iVar1 >> 0x1c);
  iVar2 = (iVar1 << 0xd) >> 0x1a;
  coprocessor_load(3,in_cr3,uVar5);
  *(int *)iVar2 = iVar2;
  piVar3 = (int *)(iVar1 * 0x4000);
  uVar5 = (uint)*(byte *)(piVar3 + 6);
  iStack_c = piVar3[3];
  *(ushort *)(*piVar3 + 0x34) = (ushort)*(byte *)(piVar3 + 6);
  vrev(in_d0,4);
  *(uint *)(param_5 + uVar5) = uVar5;
  uRam000000f0 = (undefined2)param_5;
  if (SBORROW4(uVar5,uVar5)) {
    func_0x2cd2f7f0(0xc800,(uint)&iStack_c & 0xb6000000,0,uRamb044ac60 + 6);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

