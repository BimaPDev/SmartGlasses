/* FUN_10048890 @ 0x10048890 */

void FUN_10048890(undefined1 param_1)

{
  undefined2 uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_5c;
  undefined4 *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 auStack_4b [47];
  int local_1c;
  
  iVar2 = DAT_10048964;
  local_1c = *(int *)PTR_DAT_10048968;
  local_50 = 0;
  FUN_1011ea48(&local_4c,0,0x2e,0);
  local_50._0_3_ = CONCAT12(*(undefined1 *)(iVar2 + 2),CONCAT11(*(undefined1 *)(iVar2 + 1),param_1))
  ;
  local_5c = 0;
  local_58 = (undefined4 *)0x0;
  local_54 = 0;
  uVar3 = FUN_1011ea10(iVar2 + 8);
  uVar4 = (uint)uVar3;
  if (0x31 < uVar4) {
    uVar4 = 0x2f;
  }
  uVar5 = uVar4 & 0xff;
  local_4c = (undefined1)uVar4;
  local_50 = local_50 & 0xffffff;
  FUN_1013d03e(auStack_4b,iVar2 + 8,uVar4,0x2d);
  uVar1 = *(undefined2 *)(iVar2 + 0x30);
  *(char *)((int)&local_50 + (uVar5 + 5 & 0xff)) = (char)((ushort)uVar1 >> 8);
  *(char *)((int)&local_50 + (uVar5 + 6 & 0xff)) = (char)uVar1;
  FUN_100a5b78(DAT_10048974 | ((int)PTR_DAT_1004896c - (int)PTR_DAT_10048970) * 0x20 & 0xff00U,
               DAT_1004897c,DAT_10048978,*(undefined1 *)(iVar2 + 1),*(undefined1 *)(iVar2 + 2),
               iVar2 + 8);
  local_5c = CONCAT22(local_5c._2_2_,0x1fc);
  local_58 = &local_50;
  local_54 = CONCAT22(local_54._2_2_,(short)uVar5 + 7) & 0xffff00ff;
  local_54._0_3_ = (uint3)(ushort)local_54;
  FUN_100506fc(&local_5c);
  if (*(int *)PTR_DAT_10048968 != local_1c) {
    FUN_1013cdc0();
  }
  return;
}

