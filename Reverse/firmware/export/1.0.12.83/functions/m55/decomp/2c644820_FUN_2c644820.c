/* FUN_2c644820 @ 0x2c644820 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c644820(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_r4;
  code *pcStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = *param_3;
  uVar2 = FUN_2c6450ac(*(undefined4 *)(param_4 + 100),param_2,*(undefined4 *)(param_4 + 0x60));
  uVar1 = _LAB_2c64486c;
  *(undefined4 *)(unaff_r4 + 0x4c) = uVar2;
  *(undefined4 *)(unaff_r4 + 0x50) = uVar1;
  do {
    iVar3 = FUN_2c645190(uVar2,&pcStack_14,0,0xffffffff);
    if (iVar3 == 0) {
      func_0x2c643adc(pcStack_14,uStack_10);
      (*pcStack_14)(uStack_10);
    }
    uVar2 = *(undefined4 *)(unaff_r4 + 0x4c);
  } while( true );
}

