/* FUN_2c1ceba2 @ 0x2c1ceba2 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x2c1cebe4) overlaps instruction at (ram,0x2c1cebe2)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c1ceba2(int param_1,int *param_2,int param_3,int param_4)

{
  ushort *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int unaff_r5;
  int *unaff_r7;
  char in_OV;
  int *piVar4;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 in_d16;
  undefined8 in_d19;
  
  *(int *)(param_1 + 0x58) = param_4;
  iVar3 = (int)param_2 * 0x4000;
  *param_2 = iVar3;
  *(int *)(param_4 + 0x30) = param_1;
  VectorMin(unaff_d9,unaff_d8,1,1);
  if (iVar3 == 0 || iVar3 < 0 != (bool)in_OV) {
    *unaff_r7 = param_3;
    unaff_r7[1] = iVar3;
    unaff_r7[2] = unaff_r5;
    piVar4 = unaff_r7 + 3;
    puVar1 = (ushort *)((uint)piVar4 >> 0x14);
    uRam2c1ceec0 = SUB42(param_2,0);
    *(ushort **)((int)param_2 * 0x4001) = puVar1;
    puVar2 = (undefined4 *)((int)puVar1 + param_3);
    *puVar2 = puVar1;
    puVar2[1] = 0x2c1ceebc;
    puVar2[2] = piVar4;
    puVar2[0xc6] = puVar1;
    *puVar1 = (ushort)((uint)piVar4 >> 0x14);
  }
  VectorMin(in_d19,in_d16,1,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

