/* FUN_2c13f8f0 @ 0x2c13f8f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13f8f0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = *_DAT_2c13f93c;
  uVar3 = func_0x2c14002c(*(undefined4 *)(_DAT_2c13f938 + 100),8,
                          *(undefined4 *)(_DAT_2c13f938 + 0x60),0);
  uVar2 = _DAT_2c13f944;
  iVar1 = _DAT_2c13f940;
  *(undefined4 *)(_DAT_2c13f940 + 0x4c) = uVar3;
  *(undefined4 *)(iVar1 + 0x50) = uVar2;
  do {
    iVar4 = func_0x2c140108(uVar3,&pcStack_14,0,0xffffffff);
    if (iVar4 == 0) {
      func_0x2c13ee74(pcStack_14,uStack_10);
      (*pcStack_14)(uStack_10);
    }
    uVar3 = *(undefined4 *)(iVar1 + 0x4c);
  } while( true );
}

