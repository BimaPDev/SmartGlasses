/* FUN_10137564 @ 0x10137564 */

/* WARNING: Removing unreachable block (ram,0x1013721c) */
/* WARNING: Removing unreachable block (ram,0x101371ac) */
/* WARNING: Removing unreachable block (ram,0x101372d8) */
/* WARNING: Removing unreachable block (ram,0x101372bc) */

undefined4 FUN_10137564(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int local_20;
  undefined4 local_1c;
  
  local_1c = 3;
  if ((param_1 == 0) || (-1 < *(char *)(param_1 + 0x60))) {
    uVar4 = 0xffffffea;
  }
  else {
    local_20 = param_1;
    iVar2 = FUN_100de004(0,3,0,param_1 + 0xe8);
    if (iVar2 == 0) {
      uVar4 = 0xfffffff4;
    }
    else {
      if (((*(byte *)(param_1 + 0xd0) & 0xfc) == 0) &&
         (pbVar3 = (byte *)FUN_100debd8(((*(byte *)(param_1 + 0xd3) ^ 8) & 0xf) >> 3,
                                        *(undefined1 *)(param_1 + 0xd5)), pbVar3 != (byte *)0x0)) {
        *(byte *)(param_1 + 0xd0) = *(byte *)(param_1 + 0xd0) & 3 | *pbVar3 & 0xfc;
      }
      local_20 = CONCAT22(local_20._2_2_,
                          *(byte *)(param_1 + 0xd2) & 0xfc |
                          (ushort)(*(byte *)(param_1 + 0xd0) >> 2) << 10);
      FUN_10137188(iVar2,&local_20,2);
      local_1c = CONCAT22(local_1c._2_2_,1);
      FUN_10137188(iVar2,&local_1c,2);
      local_1c = CONCAT31(local_1c._1_3_,7);
      uVar1 = FUN_10137664(param_1 + 0xd4);
      local_1c._0_2_ = CONCAT11(uVar1,(undefined1)local_1c);
      FUN_10137188(iVar2,&local_1c,2);
      if (local_1c._1_1_ != '\0') {
        FUN_10137188(iVar2,param_1 + 0xd4);
      }
      if (*(char *)(param_1 + 0xdc) == '\x02') {
        local_1c = CONCAT22(local_1c._2_2_,0x204);
        FUN_10137188(iVar2,&local_1c,2);
        FUN_101327c8(iVar2 + 8,2);
      }
      if ((int)((uint)*(byte *)(param_1 + 0xdd) << 0x1f) < 0) {
        local_1c = CONCAT22(local_1c._2_2_,0x208);
        FUN_10137188(iVar2,&local_1c,2);
      }
      uVar4 = FUN_100ddd34(param_1,iVar2);
    }
  }
  return uVar4;
}

