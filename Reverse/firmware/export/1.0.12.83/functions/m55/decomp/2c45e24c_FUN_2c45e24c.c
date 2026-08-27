/* FUN_2c45e24c @ 0x2c45e24c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c45e196) */
/* WARNING: Removing unreachable block (ram,0x2c45e19e) */
/* WARNING: Removing unreachable block (ram,0x2c45e136) */
/* WARNING: Removing unreachable block (ram,0x2c45e248) */
/* WARNING: Removing unreachable block (ram,0x2c45e24a) */
/* WARNING: Removing unreachable block (ram,0x2c45e13a) */
/* WARNING: Removing unreachable block (ram,0x2c45e13c) */
/* WARNING: Removing unreachable block (ram,0x2c45e1a0) */
/* WARNING: Removing unreachable block (ram,0x2c45db44) */
/* WARNING: Removing unreachable block (ram,0x2c45d75e) */
/* WARNING: Removing unreachable block (ram,0x2c45dbe6) */
/* WARNING: Removing unreachable block (ram,0x2c45e166) */
/* WARNING: Removing unreachable block (ram,0x2c45e172) */
/* WARNING: Removing unreachable block (ram,0x2c45e152) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c45e24c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int unaff_r6;
  
  iVar1 = _LAB_2c45e2d0;
  iVar2 = *(int *)*param_4;
  *(undefined4 *)(_LAB_2c45e3a8 + unaff_r6) = param_3;
  *(int *)(iVar1 + 0x58) = iVar2;
  *(char *)(iVar2 + 0xb) = (char)uRam000000a4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

