/* FUN_2c451650 @ 0x2c451650 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c4515c2) */
/* WARNING: Removing unreachable block (ram,0x2c451176) */
/* WARNING: Removing unreachable block (ram,0x2c4515d2) */
/* WARNING: Removing unreachable block (ram,0x2c45167a) */
/* WARNING: Removing unreachable block (ram,0x2c45167e) */
/* WARNING: Removing unreachable block (ram,0x2c451688) */
/* WARNING: Removing unreachable block (ram,0x2c451694) */
/* WARNING: Removing unreachable block (ram,0x2c45166e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c451650(undefined4 param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_r5;
  
  if (SCARRY4(unaff_r5,0x5a)) {
    iVar2 = *(int *)(unaff_r5 + 0x5e);
    uVar1 = *(undefined4 *)(iVar2 + 0x58);
    *(int *)(unaff_r5 + 0x62) = param_2;
    *(undefined4 *)(unaff_r5 + 0x66) = uVar1;
    *(code **)(unaff_r5 + 0x6a) = *(code **)(unaff_r5 + 0x5a);
    *(int *)(unaff_r5 + 0x6e) = iVar2;
    *(int **)(unaff_r5 + 0x72) = (int *)(unaff_r5 + 0x62);
                    /* WARNING: Could not recover jumptable at 0x2c4923ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_r5 + 0x5a))(iVar2,iVar2,1);
    return;
  }
  *(undefined1 *)(param_2 + 0xc) = param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

