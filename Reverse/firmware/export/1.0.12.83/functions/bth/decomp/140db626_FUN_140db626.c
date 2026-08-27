/* FUN_140db626 @ 0x140db626 */

undefined4 FUN_140db626(undefined4 param_1,int param_2,undefined4 *param_3,uint *param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [4];
  uint local_64;
  
  if ((*(short *)(param_2 + 0xe) < 0) ||
     (iVar2 = FUN_140dfd54(param_1,(int)*(short *)(param_2 + 0xe),auStack_68), iVar2 < 0)) {
    sVar1 = *(short *)(param_2 + 0xc);
    *param_4 = 0;
    if ((int)sVar1 << 0x18 < 0) {
      uVar3 = 0x40;
      goto LAB_140db668;
    }
  }
  else {
    *param_4 = (uint)((local_64 & 0xf000) == 0x2000);
  }
  uVar3 = 0x400;
LAB_140db668:
  *param_3 = uVar3;
  return 0;
}

